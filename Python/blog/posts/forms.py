from django import forms
class BlogPostForm(forms.Form):
 """
 Form to get user posts
 """
 title = forms.CharField(label="Title",required=True)
 body = forms.CharField(label="Body",
 widget= forms.Textarea,required=True)