/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAdResponse.h>

@class NSURL;

@interface SXPrerollAdResponse : SXAdResponse {

	BOOL _showBranding;
	NSURL* _videoURL;
	double _skipDuration;

}

@property (nonatomic,retain) NSURL * videoURL;                 //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) double skipDuration;              //@synthesize skipDuration=_skipDuration - In the implementation block
@property (assign,nonatomic) BOOL showBranding;                //@synthesize showBranding=_showBranding - In the implementation block
-(BOOL)showBranding;
-(void)setShowBranding:(BOOL)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(double)skipDuration;
-(void)setSkipDuration:(double)arg1 ;
@end

