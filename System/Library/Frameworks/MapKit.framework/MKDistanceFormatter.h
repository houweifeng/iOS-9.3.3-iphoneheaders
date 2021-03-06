/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _units;
	unsigned long long _unitStyle;

}

@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long units;                  //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
+(id)_maps_shortLocalizedStringForDistance:(double)arg1 ;
+(id)_maps_localizedStringForDistance:(double)arg1 ;
-(id)init;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)_useMetric;
-(id)stringFromDistance:(double)arg1 ;
-(double)distanceFromString:(id)arg1 ;
-(void)setUnitStyle:(unsigned long long)arg1 ;
-(void)setUnits:(unsigned long long)arg1 ;
-(unsigned long long)units;
-(unsigned long long)unitStyle;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

