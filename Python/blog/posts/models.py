from django.db import models
import datetime
# Create your models here.
class Posts(models.Model):
 """
 Model that holds blog posts
 """
 title = models.CharField(max_length=200)
 body = models.CharField(max_length=1000)
 posted_date = models.DateTimeField(
 default= datetime.datetime.now,blank=True)
