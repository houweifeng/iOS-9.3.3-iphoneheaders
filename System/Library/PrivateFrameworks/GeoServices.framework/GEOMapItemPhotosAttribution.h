/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
-(BOOL)canShowPhotosLocally;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(NSArray *)addPhotoURLs;
@end

