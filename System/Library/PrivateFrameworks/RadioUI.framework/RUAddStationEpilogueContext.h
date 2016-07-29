/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RadioStation, MPAVItem;

@interface RUAddStationEpilogueContext : NSObject {

	BOOL _shouldKeepPlayingCurrentItem;
	BOOL _shouldBeginPlayback;
	RadioStation* _addedStation;
	MPAVItem* _prefixItem;

}

@property (nonatomic,readonly) RadioStation * addedStation;                  //@synthesize addedStation=_addedStation - In the implementation block
@property (nonatomic,retain) MPAVItem * prefixItem;                          //@synthesize prefixItem=_prefixItem - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepPlayingCurrentItem;              //@synthesize shouldKeepPlayingCurrentItem=_shouldKeepPlayingCurrentItem - In the implementation block
@property (assign,nonatomic) BOOL shouldBeginPlayback;                       //@synthesize shouldBeginPlayback=_shouldBeginPlayback - In the implementation block
-(id)description;
-(MPAVItem *)prefixItem;
-(id)initWithAddedStation:(id)arg1 ;
-(RadioStation *)addedStation;
-(BOOL)shouldKeepPlayingCurrentItem;
-(void)setShouldKeepPlayingCurrentItem:(BOOL)arg1 ;
-(BOOL)shouldBeginPlayback;
-(void)setShouldBeginPlayback:(BOOL)arg1 ;
-(void)setPrefixItem:(MPAVItem *)arg1 ;
@end
