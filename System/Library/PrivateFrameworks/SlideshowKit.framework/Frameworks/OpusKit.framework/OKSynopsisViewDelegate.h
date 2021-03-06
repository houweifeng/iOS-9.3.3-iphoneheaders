/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKSynopsisViewDelegate <NSObject>
@optional
-(void)synopsisViewDidEnd:(id)arg1;
-(void)synopsisViewDidBegin:(id)arg1;
-(void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2;
-(BOOL)shouldShowSynopsisView;
-(void)synopsisViewWillBegin:(id)arg1;

@required
-(id)visibleWidgets;
-(void)synopsisView:(id)arg1 didSelectItem:(id)arg2;

@end

