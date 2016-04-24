# AmazonS3 Filefield Sources

This module integrates the AmazonS3 module with Filefield sources. It allows you to attach a file to
an entity using an Autocomplete field and circumvent the process of uploading a file through the Drupa
upload form. This is especially helpful and necessary for websites that provide access to very large
files hosted on S3; instead of uploading through the File Upload interface, one might upload the file
directly to Amazon S3 first, refresh the site's AmazonS3 file cache, and then attach the file using the
autocomplete textfield provided by this module.


## Requirements
- [AmazonS3 Module](http://drupal.org/project/amazons3) and its prerequisites
- [Filefield Sources Module](http://drupal.org/project/filefield_sources)


## Usage
- Install Filefield Sources, and then this module.
- Ensure AmazonS3 is configured.
- Create an Entity type with a File field, or edit an existing Entity type's file field settings. (This will also work for Commerce product variations.)
- Under the field's File sources settings, enable the "Amazon S3 reference" source type.
- Navigate to the AmazonS3 admin page at /admin/config/media/amazons3
- Scroll to the bottom and select the new "Rebuild metadata cache" button. The system will loop through your
  bucket and build the {amazons3_file} cache table from scratch. This table is normally built on-demand per-file as it
  is needed, by the stream_stat() function.
