/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHDataFormatter <NSObject>
@required
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
-(BOOL)isCompatibleWithDataFormatter:(id)arg1;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
-(long long)numberOfDecimalPlaces;

@end
