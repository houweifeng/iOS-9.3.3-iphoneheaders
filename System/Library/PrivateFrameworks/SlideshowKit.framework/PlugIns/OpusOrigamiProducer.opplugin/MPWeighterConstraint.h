/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {

	long long numOfImages;
	NSDictionary* nextConstraints;
	NSString* presetID;
	long long movieCount;
	BOOL moviesOnly;
	BOOL ignoreMovies;
	long long wideLandscape;
	long long square;
	long long landscape;
	long long portrait;
	long long hPanoramas;
	long long vPanoramas;
	long long supportsHPanoramas;
	long long supportsVPanoramas;
	long long supportsAllPanoramas;
	long long allPanoramas;
	BOOL hasPanorama;
	NSArray* maxAspectRatios;
	NSArray* minAspectRatios;
	NSArray* tags;
	BOOL tagsOnSourceOnly;
	BOOL shelf;

}

@property (nonatomic,retain) NSDictionary * nextConstraints; 
@property (nonatomic,retain) NSString * presetID; 
@property (nonatomic,retain) NSArray * maxAspectRatios; 
@property (nonatomic,retain) NSArray * minAspectRatios; 
@property (nonatomic,retain) NSArray * tags; 
-(void)setPresetID:(NSString *)arg1 ;
-(NSString *)presetID;
-(NSDictionary *)nextConstraints;
-(NSArray *)minAspectRatios;
-(NSArray *)maxAspectRatios;
-(void)setMinAspectRatios:(NSArray *)arg1 ;
-(void)setMaxAspectRatios:(NSArray *)arg1 ;
-(void)setNextConstraints:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
@end

