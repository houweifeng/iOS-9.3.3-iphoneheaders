/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _expressionString;
	void* _reserved;

}
+(void)initialize;
+(id)regularExpressionWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExpressionString:(id)arg1 ;
-(id)initWithExpressionString:(id)arg1 options:(unsigned)arg2 ;
-(id)expressionString;
-(unsigned long long)numberOfSubexpressions;
-(NSRange)matchedRangeForCString:(const char*)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(const char*)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2 ;
@end

