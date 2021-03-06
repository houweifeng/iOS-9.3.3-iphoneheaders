/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOMapItem;
@interface GEOSuggestedDestination : NSObject <NSSecureCoding> {

	unsigned long long _classification;
	id<GEOMapItem> _mapItem;
	int _transportType;
	long long _loiType;

}

@property (assign,nonatomic) unsigned long long classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,retain) id<GEOMapItem> mapItem;                         //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) long long loiType;                              //@synthesize loiType=_loiType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setLoiType:(long long)arg1 ;
-(long long)loiType;
-(void)setClassification:(unsigned long long)arg1 ;
-(unsigned long long)classification;
-(id<GEOMapItem>)mapItem;
-(void)setMapItem:(id<GEOMapItem>)arg1 ;
@end

