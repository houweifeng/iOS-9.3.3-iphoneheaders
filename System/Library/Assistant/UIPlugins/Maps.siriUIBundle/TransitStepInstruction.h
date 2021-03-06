/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TransitInstruction.h>

@class GEOComposedRouteStep, NSDictionary;

@interface TransitStepInstruction : TransitInstruction {

	GEOComposedRouteStep* _step;
	NSDictionary* _overridenInstructionsMapping;

}

@property (nonatomic,readonly) GEOComposedRouteStep * step;                              //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSDictionary * overridenInstructionsMapping;              //@synthesize overridenInstructionsMapping=_overridenInstructionsMapping - In the implementation block
+(id)instructionForStep:(id)arg1 overrides:(NSDictionary*)arg2 context:(int)arg3 ;
+(id)instructionForStep:(id)arg1 context:(int)arg2 ;
-(NSDictionary *)overridenInstructionsMapping;
-(id)timeZoneForFormattedString;
-(id)initWithStep:(id)arg1 overrides:(NSDictionary*)arg2 context:(int)arg3 ;
-(id)destinationName;
-(id)instructionSet;
-(GEOComposedRouteStep *)step;
@end

