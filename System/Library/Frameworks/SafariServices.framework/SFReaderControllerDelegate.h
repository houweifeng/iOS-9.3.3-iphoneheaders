/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderControllerDelegate <NSObject>
@optional
-(void)readerController:(id)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
-(id)readerControllerInitialConfiguration:(id)arg1;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2;
-(void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2;
-(void)readerController:(id)arg1 didCollectReadingListItemInfo:(id)arg2 bookmarkID:(id)arg3;
-(void)readerController:(id)arg1 didCollectReaderContentForMail:(id)arg2;
-(void)readerController:(id)arg1 didPrepareReaderContentForPrinting:(id)arg2;
-(void)readerController:(id)arg1 didPrepareReaderContentForDisplay:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;

@end

