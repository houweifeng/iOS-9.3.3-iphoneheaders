/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@class ACSportsAttributionView;

@interface ACSportsAttributionFooter : SiriUIReusableFooterView {

	ACSportsAttributionView* _attributionView;
	unsigned long long _verticalAlignment;

}

@property (nonatomic,readonly) ACSportsAttributionView * attributionView;              //@synthesize attributionView=_attributionView - In the implementation block
@property (assign,nonatomic) unsigned long long verticalAlignment;                     //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
+(double)heightForMultiplePunchOuts:(id)arg1 ;
+(double)desiredHeightForVerticalAlignment:(unsigned long long)arg1 andAttributionHeight:(double)arg2 ;
+(double)defaultHeight;
-(ACSportsAttributionView *)attributionView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)verticalAlignment;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
@end
