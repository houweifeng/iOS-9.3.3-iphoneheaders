/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _acceptedTermsVersion;

}

@property (assign,nonatomic) unsigned long long acceptedTermsVersion;              //@synthesize acceptedTermsVersion=_acceptedTermsVersion - In the implementation block
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)acceptedTermsVersion;
-(void)setAcceptedTermsVersion:(unsigned long long)arg1 ;
@end

