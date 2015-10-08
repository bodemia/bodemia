from django.conf.urls.defaults import *
from posts.views import *
urlpatterns = patterns('posts',
    (r'^posts/new/$','views.get_new_blog_post_form'),
    (r'^posts/add/$','views.save_blog_post'),
)