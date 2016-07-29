/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, NSMutableArray, NSArray;

@interface SubtitleHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	NSMutableArray* _subtitleLabels;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * subtitleLabels;              //@synthesize subtitleLabels=_subtitleLabels - In the implementation block
-(void)removeSubtitleAtIndex:(unsigned long long)arg1 ;
-(id)addSubtitle;
-(NSArray *)subtitleLabels;
-(void)setSubtitleLabels:(NSArray *)arg1 ;
-(id)subtitleAtIndex:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
