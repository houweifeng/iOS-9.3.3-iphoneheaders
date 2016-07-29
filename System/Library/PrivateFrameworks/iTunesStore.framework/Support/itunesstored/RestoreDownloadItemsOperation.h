/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount, NSArray, NSMutableArray;

@interface RestoreDownloadItemsOperation : ISOperation {

	SSAccount* _account;
	NSArray* _downloadItems;
	NSMutableArray* _responses;
	BOOL _shouldShowTermsAndConditionsDialog;

}

@property (readonly) SSAccount * account; 
@property (readonly) NSArray * downloadItems; 
@property (assign) id<RestoreDownloadItemsOperationDelegate> delegate; 
@property (assign) BOOL shouldShowTermsAndConditionsDialog; 
@property (readonly) NSArray * responses; 
-(id)initWithDownloadItems:(id)arg1 account:(id)arg2 ;
-(void)setShouldShowTermsAndConditionsDialog:(BOOL)arg1 ;
-(id)_newResponseWithItems:(id)arg1 error:(id)arg2 ;
-(void)_addResponse:(id)arg1 ;
-(BOOL)_runWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_showDialogsForResponse:(id)arg1 ;
-(id)_plistDataWithItems:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_runWithBodyData:(id)arg1 contentEncoding:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_runWithItems:(id)arg1 options:(id)arg2 ;
-(BOOL)shouldShowTermsAndConditionsDialog;
-(NSArray *)downloadItems;
-(void)dealloc;
-(void)_run;
-(void)run;
-(NSArray *)responses;
-(SSAccount *)account;
@end
