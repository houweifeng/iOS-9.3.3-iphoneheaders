/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMagazineProducer/OpusMagazineProducer-Structs.h>
@class OKPresentation, NSMutableDictionary, OKAutoLayoutLiveFeedContext, OKAutoLayoutFreqController;

@interface OKAutoLayout : NSObject {

	OKPresentation* _presentation;
	NSMutableDictionary* _metadataCacheDict;
	OKAutoLayoutLiveFeedContext* _liveFeedContext;
	OKAutoLayoutFreqController* _freqController;
	BOOL _allowMovieWithPhotos;
	BOOL _forceToIterateAllLayouts;
	double _layoutAspectRatio;
	double _targetAspectRatio;

}

@property (assign,nonatomic) double layoutAspectRatio;                   //@synthesize layoutAspectRatio=_layoutAspectRatio - In the implementation block
@property (assign,nonatomic) double targetAspectRatio;                   //@synthesize targetAspectRatio=_targetAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL allowMovieWithPhotos;                  //@synthesize allowMovieWithPhotos=_allowMovieWithPhotos - In the implementation block
@property (assign,nonatomic) BOOL forceToIterateAllLayouts;              //@synthesize forceToIterateAllLayouts=_forceToIterateAllLayouts - In the implementation block
+(BOOL)needsPanoramaEffectForRectASP:(float)arg1 mediaASP:(float)arg2 ;
+(float)photoScoreForMediaItem:(id)arg1 ;
+(float)panningCropThreshold;
+(float)croppedPercentageforRectASP:(float)arg1 photoASP:(float)arg2 ;
+(float)scaleFactorForMediaItem:(id)arg1 toFitInRect:(CGRect)arg2 ;
-(long long)liveFeedNumOfPagesGenerated;
-(id)liveFeedPrimaryResolutionKey;
-(id)generateNextPagesByMediaItems:(id)arg1 maxPages:(long long)arg2 isFirstPage:(BOOL)arg3 ;
-(BOOL)startFeedWith:(id)arg1 primaryResolutionKey:(id)arg2 ;
-(void)endFeed;
-(long long)liveFeedNumOfMediasUsed;
-(double)layoutAspectRatio;
-(unsigned long long)_analyzeLayouts:(id)arg1 ;
-(id)_titleGuidelineFromPresentation:(id)arg1 ;
-(id)_loopAllLayouts:(id)arg1 numOfAllMedias:(unsigned long long)arg2 layoutInfos:(id)arg3 primaryResolution:(id)arg4 ;
-(id)_metadataForMediaItem:(id)arg1 ;
-(void)setAllowMovieWithPhotos:(BOOL)arg1 ;
-(id)generatePagesByMediaItems:(id)arg1 layoutsByResolution:(id)arg2 primaryResolutionKey:(id)arg3 ;
-(double)_maxDurationOfMediaItems:(id)arg1 ;
-(void)setForceToIterateAllLayouts:(BOOL)arg1 ;
-(id)_parseLayouts:(id)arg1 ;
-(id)_subtitleGuidelineFromPresentation:(id)arg1 forMediaItem:(id)arg2 ;
-(id)_findBestMatchingLayoutFromLayouts:(id)arg1 forMediaItems:(id)arg2 currentIndx:(unsigned long long)arg3 checkFollowingMediaItems:(long long)arg4 remainingItems:(unsigned long long)arg5 guidelineForMediaItems:(id)arg6 isFirstPage:(BOOL)arg7 ;
-(void)setLayoutAspectRatio:(double)arg1 ;
-(BOOL)forceToIterateAllLayouts;
-(double)targetAspectRatio;
-(id)_analyzeLayouts2:(id)arg1 ;
-(void)setTargetAspectRatio:(double)arg1 ;
-(double)_croppingScoreForMediaItems:(id)arg1 layoutInfo:(id)arg2 ;
-(id)_matchMediaItems:(id)arg1 toLayoutInfo:(id)arg2 orderedKeys:(id)arg3 ;
-(BOOL)allowMovieWithPhotos;
-(void)dealloc;
-(id)initWithPresentation:(id)arg1 ;
@end

