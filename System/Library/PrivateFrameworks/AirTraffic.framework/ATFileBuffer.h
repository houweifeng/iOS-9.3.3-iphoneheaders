/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle;

@interface ATFileBuffer : NSObject {

	NSFileHandle* _bufferFileHandle;
	unsigned long long _currentReadLocation;
	unsigned long long _length;

}
-(id)init;
-(unsigned long long)length;
-(void)appendData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)rewindData:(id)arg1 ;
-(void)rewind:(unsigned long long)arg1 ;
@end

