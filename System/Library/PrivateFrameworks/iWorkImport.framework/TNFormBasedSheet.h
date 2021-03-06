/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TNSheet.h>

@class TSTTableInfo, NSString;

@interface TNFormBasedSheet : TNSheet {

	CFUUIDRef mTableID;
	TSTTableInfo* mTableInfo;
	NSString* mImportedTargetName;

}

@property (readonly) TSTTableInfo * tableInfo; 
@property (assign) CFUUIDRef tableID; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(TSTTableInfo *)tableInfo;
-(BOOL)isForm;
-(void)clearTableInfoCache;
-(id)initWithContext:(id)arg1 importedTargetName:(id)arg2 ;
-(void)resolveImportedTargetNameInDocumentRoot:(id)arg1 ;
-(void)dealloc;
-(double)contentScale;
-(CFUUIDRef)tableID;
@end

