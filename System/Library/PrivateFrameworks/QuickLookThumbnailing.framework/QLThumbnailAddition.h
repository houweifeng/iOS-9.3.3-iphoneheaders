/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL, NSDictionary, GSAddition, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject {

	NSURL* _additionURL;
	long long _additionURLSandboxToken;
	NSDictionary* _metadata;
	GSAddition* _addition;
	NSDictionary* _thumbnailDataDictionary;
	QLThumbnailVersion* _thumbnailVersion;

}

@property (readonly) QLThumbnailVersion * thumbnailVersion; 
@property (retain) NSURL * additionURL;                                  //@synthesize additionURL=_additionURL - In the implementation block
@property (retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) GSAddition * genStoreAddition; 
@property (retain) NSDictionary * thumbnailDataDictionary;               //@synthesize thumbnailDataDictionary=_thumbnailDataDictionary - In the implementation block
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3 ;
+(id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2 ;
+(id)plistInExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(BOOL)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char*)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id*)arg5 ;
+(BOOL)removeExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1 ;
+(id)imageNameForThumbnailInImageSource:(CGImageSourceRef)arg1 ;
+(id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2 ;
+(BOOL)_hitAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4 ;
+(BOOL)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4 ;
+(id)_additionCreationInfo;
+(BOOL)imageContainsAlphaForOtherImages:(CGImageRef)arg1 ;
+(BOOL)imageContainsAlpha:(CGImageRef)arg1 ;
+(BOOL)_removedAdditionsOnURLUsingDaemon:(id)arg1 ;
+(BOOL)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removedAdditionsOnURL:(id)arg1 ;
+(Class)imageClassWithError:(id*)arg1 ;
+(BOOL)removeAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(BOOL)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2 ;
+(BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id*)arg2 ;
+(id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3 ;
+(void)noteCloudDocsDownloadedFileAtURL:(id)arg1 ;
+(void)downloadOrGenerateThumbnailAtPhysicalURL:(id)arg1 ;
+(BOOL)associateImage:(CGImageRef)arg1 metadata:(id)arg2 automaticallyGenerated:(BOOL)arg3 withURL:(id)arg4 error:(id*)arg5 ;
+(void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(BOOL)arg3 atURL:(id)arg4 error:(id*)arg5 ;
+(BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(QLThumbnailVersion *)thumbnailVersion;
-(NSURL *)additionURL;
-(id)thumbnailURLForKey:(id)arg1 ;
-(GSAddition *)genStoreAddition;
-(void)setAdditionURL:(NSURL *)arg1 ;
-(void)setThumbnailDataDictionary:(NSDictionary *)arg1 ;
-(BOOL)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2 ;
-(BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
-(id)thumbnailDataForKey:(id)arg1 ;
-(id)thumbnailsDictionaryWithError:(id*)arg1 ;
-(NSDictionary *)thumbnailDataDictionary;
-(id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)thumbnailWithMaximumDimension:(double)arg1 properties:(id*)arg2 flavor:(int*)arg3 contentRect:(CGRect*)arg4 ;
@end
