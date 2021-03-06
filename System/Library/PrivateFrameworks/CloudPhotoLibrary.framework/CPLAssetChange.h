/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSString, NSDate, NSArray, CLLocation, NSNumber, CPLAdjustments, CPLPlaceAnnotation;

@interface CPLAssetChange : CPLItemChange {

	BOOL _favorite;
	BOOL _hidden;
	NSString* _masterIdentifier;
	NSDate* _lastSharedDate;
	NSDate* _addedDate;
	NSDate* _assetDate;
	NSArray* _resources;
	NSString* _caption;
	NSString* _extendedDescription;
	long long _orientation;
	long long _duration;
	CLLocation* _location;
	NSArray* _keywords;
	NSString* _timeZoneName;
	NSNumber* _timeZoneOffset;
	NSString* _momentIdentifier;
	NSString* _momentName;
	NSString* _collectionIdentifier;
	NSString* _collectionName;
	unsigned long long _burstFlags;
	NSString* _burstIdentifier;
	NSString* _mediaGroupIdentifier;
	long long _videoComplementDurationValue;
	long long _videoComplementDurationTimescale;
	long long _videoComplementImageDisplayValue;
	long long _videoComplementImageDisplayTimescale;
	unsigned long long _videoComplementVisibilityState;
	unsigned long long _assetSubtype;
	unsigned long long _assetHDRType;
	CPLAdjustments* _adjustments;
	unsigned long long _originalChoice;
	NSArray* _people;
	CPLPlaceAnnotation* _placeAnnotation;

}

@property (nonatomic,copy) NSString * masterIdentifier;                                      //@synthesize masterIdentifier=_masterIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * lastSharedDate;                                          //@synthesize lastSharedDate=_lastSharedDate - In the implementation block
@property (nonatomic,copy) NSDate * addedDate;                                               //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,copy) NSDate * assetDate;                                               //@synthesize assetDate=_assetDate - In the implementation block
@property (nonatomic,copy) NSArray * resources;                                              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSString * caption;                                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * extendedDescription;                                   //@synthesize extendedDescription=_extendedDescription - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                                //@synthesize favorite=_favorite - In the implementation block
@property (assign,nonatomic) long long orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                                               //@synthesize keywords=_keywords - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                    //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * timeZoneName;                                          //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (nonatomic,copy) NSNumber * timeZoneOffset;                                        //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
@property (nonatomic,copy) NSString * momentIdentifier;                                      //@synthesize momentIdentifier=_momentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * momentName;                                            //@synthesize momentName=_momentName - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;                                  //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                        //@synthesize collectionName=_collectionName - In the implementation block
@property (assign,nonatomic) unsigned long long burstFlags;                                  //@synthesize burstFlags=_burstFlags - In the implementation block
@property (nonatomic,copy) NSString * burstIdentifier;                                       //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaGroupIdentifier;                                  //@synthesize mediaGroupIdentifier=_mediaGroupIdentifier - In the implementation block
@property (assign,nonatomic) long long videoComplementDurationValue;                         //@synthesize videoComplementDurationValue=_videoComplementDurationValue - In the implementation block
@property (assign,nonatomic) long long videoComplementDurationTimescale;                     //@synthesize videoComplementDurationTimescale=_videoComplementDurationTimescale - In the implementation block
@property (assign,nonatomic) long long videoComplementImageDisplayValue;                     //@synthesize videoComplementImageDisplayValue=_videoComplementImageDisplayValue - In the implementation block
@property (assign,nonatomic) long long videoComplementImageDisplayTimescale;                 //@synthesize videoComplementImageDisplayTimescale=_videoComplementImageDisplayTimescale - In the implementation block
@property (assign,nonatomic) unsigned long long videoComplementVisibilityState;              //@synthesize videoComplementVisibilityState=_videoComplementVisibilityState - In the implementation block
@property (assign,nonatomic) unsigned long long assetSubtype;                                //@synthesize assetSubtype=_assetSubtype - In the implementation block
@property (assign,nonatomic) unsigned long long assetHDRType;                                //@synthesize assetHDRType=_assetHDRType - In the implementation block
@property (nonatomic,retain) CPLAdjustments * adjustments;                                   //@synthesize adjustments=_adjustments - In the implementation block
@property (assign,nonatomic) unsigned long long originalChoice;                              //@synthesize originalChoice=_originalChoice - In the implementation block
@property (nonatomic,copy) NSArray * people;                                                 //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) CPLPlaceAnnotation * placeAnnotation;                           //@synthesize placeAnnotation=_placeAnnotation - In the implementation block
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3 ;
-(BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3 ;
-(id)proposedCloudIdentifierWithError:(id*)arg1 ;
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(long long)duration;
-(void)setOrientation:(long long)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(long long)orientation;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)caption;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(NSDate *)addedDate;
-(void)setAddedDate:(NSDate *)arg1 ;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(NSString *)masterIdentifier;
-(void)setMasterIdentifier:(NSString *)arg1 ;
-(void)setMomentIdentifier:(NSString *)arg1 ;
-(void)setMomentName:(NSString *)arg1 ;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(NSDate *)lastSharedDate;
-(void)setLastSharedDate:(NSDate *)arg1 ;
-(void)setAssetDate:(NSDate *)arg1 ;
-(NSNumber *)timeZoneOffset;
-(void)setTimeZoneOffset:(NSNumber *)arg1 ;
-(void)setPlaceAnnotation:(CPLPlaceAnnotation *)arg1 ;
-(void)setExtendedDescription:(NSString *)arg1 ;
-(void)setAssetHDRType:(unsigned long long)arg1 ;
-(void)setPeople:(NSArray *)arg1 ;
-(void)setMediaGroupIdentifier:(NSString *)arg1 ;
-(void)setVideoComplementDurationValue:(long long)arg1 ;
-(void)setVideoComplementDurationTimescale:(long long)arg1 ;
-(void)setVideoComplementImageDisplayValue:(long long)arg1 ;
-(void)setVideoComplementImageDisplayTimescale:(long long)arg1 ;
-(void)setVideoComplementVisibilityState:(unsigned long long)arg1 ;
-(void)setAdjustments:(CPLAdjustments *)arg1 ;
-(void)setOriginalChoice:(unsigned long long)arg1 ;
-(void)setBurstFlags:(unsigned long long)arg1 ;
-(void)setBurstIdentifier:(NSString *)arg1 ;
-(void)setAssetSubtype:(unsigned long long)arg1 ;
-(NSDate *)assetDate;
-(CPLPlaceAnnotation *)placeAnnotation;
-(NSString *)collectionIdentifier;
-(NSString *)momentName;
-(NSString *)momentIdentifier;
-(NSString *)extendedDescription;
-(unsigned long long)burstFlags;
-(unsigned long long)assetSubtype;
-(unsigned long long)assetHDRType;
-(NSArray *)people;
-(NSString *)mediaGroupIdentifier;
-(long long)videoComplementDurationValue;
-(long long)videoComplementDurationTimescale;
-(long long)videoComplementImageDisplayValue;
-(long long)videoComplementImageDisplayTimescale;
-(unsigned long long)videoComplementVisibilityState;
-(unsigned long long)originalChoice;
-(BOOL)supportsResources;
-(NSString *)collectionName;
-(NSString *)burstIdentifier;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(id)propertiesDescription;
-(CPLAdjustments *)adjustments;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
@end

