/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(/*function pointer*/void*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2 ;
+(BOOL)isBundleURL:(id)arg1 ;
+(/*function pointer*/void*)urlCallbackForUTI:(id)arg1 ;
-(void)computePreview;
@end
