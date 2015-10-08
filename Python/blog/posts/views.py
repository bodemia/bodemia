from django.shortcuts import render
from django.http import HttpResponse
from django.http import HttpResponseRedirect
from posts.models import Posts
from posts.forms import BlogPostForm
def get_new_blog_post_form(request):
 """
 Method that renders the new post form
 """
 old_posts = Posts.objects.all()
 if request.method == "GET":
   return render(request,'post.html',
{'posts':old_posts,'postform':BlogPostForm()})
def save_blog_post(request):
 """
 Storing posts to database 
 """
 if request.method == 'POST':
        form = BlogPostForm(request.POST)
        if form.is_valid():
                  blogtable = Posts(
                  title = request.POST['title'],
                  body = request.POST['body'],
                  )
                  blogtable.save()
                  return HttpResponseRedirect('/posts/new/')
        else:
                form = BlogPostForm()
        variables= RequestContext(request, { 
           'form': form 
        })
        return render_to_response('post.html',variables)