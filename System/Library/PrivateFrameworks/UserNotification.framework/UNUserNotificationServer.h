/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNNotificationRegistrarConnectionListener, UNNotificationSchedulerConnectionListener;

@interface UNUserNotificationServer : NSObject {

	UNNotificationRegistrarConnectionListener* _registrarConnectionListener;
	UNNotificationSchedulerConnectionListener* _schedulerConnectionListener;

}
+(id)sharedInstance;
-(id)initWithSystemStateProvider:(id)arg1 ;
@end

