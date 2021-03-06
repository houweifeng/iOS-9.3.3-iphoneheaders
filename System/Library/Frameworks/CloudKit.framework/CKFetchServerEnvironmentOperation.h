/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@interface CKFetchServerEnvironmentOperation : CKOperation {

	long long _environment;
	/*^block*/id _fetchServerEnvironmentCompletionBlock;

}

@property (assign,nonatomic) long long environment;                               //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) id fetchServerEnvironmentCompletionBlock;              //@synthesize fetchServerEnvironmentCompletionBlock=_fetchServerEnvironmentCompletionBlock - In the implementation block
-(id)init;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(void)setFetchServerEnvironmentCompletionBlock:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchServerEnvironmentCompletionBlock;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
@end

