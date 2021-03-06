/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment {

	NSString* _pageNumber;
	NSString* _bookmarkName;

}

@property (nonatomic,copy) NSString * pageNumber;                //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,copy) NSString * bookmarkName;              //@synthesize bookmarkName=_bookmarkName - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)stringEquivalent;
-(id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3 ;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(NSString *)bookmarkName;
-(void)setBookmarkName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)pageNumber;
-(void)setPageNumber:(NSString *)arg1 ;
-(int)elementKind;
@end

