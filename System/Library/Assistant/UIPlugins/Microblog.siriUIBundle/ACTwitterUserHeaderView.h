/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <SiriUI/SiriUIReusableSubtitledHeaderView.h>

@class UIImageView;

@interface ACTwitterUserHeaderView : SiriUIReusableSubtitledHeaderView {

	UIImageView* _verificationBadgeImageView;
	BOOL _showsVerificationBadge;

}

@property (assign,nonatomic) BOOL showsVerificationBadge;              //@synthesize showsVerificationBadge=_showsVerificationBadge - In the implementation block
-(BOOL)showsVerificationBadge;
-(void)setShowsVerificationBadge:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

