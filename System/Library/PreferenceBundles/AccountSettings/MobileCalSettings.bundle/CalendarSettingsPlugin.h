/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUISettingsPluginProtocol.h>

@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, PSSpecifier, EKEventStore, ACAccountStore, NSString;

@interface CalendarSettingsPlugin : NSObject <ACUISettingsPluginProtocol> {

	PSViewController*<ACUISettingsPluginParentProtocol> _parentController;
	PSSpecifier* _showInviteeDeclinesSpecifier;
	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	PSSpecifier* _birthdayCalendarSpecifier;
	PSSpecifier* _defaultAlarmsSpecifier;
	PSSpecifier* _overlayCalendarSpecifier;
	PSSpecifier* _showWeekNumbersSpecifier;
	PSSpecifier* _showEventsFoundInMailSpecifier;
	EKEventStore* _eventStore;
	ACAccountStore* _accountStore;
	BOOL _moreThanOneCalendar;
	PSSpecifier* _weekStartSpecifier;

}

@property (nonatomic,retain) PSSpecifier * weekStartSpecifier;              //@synthesize weekStartSpecifier=_weekStartSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(id)_eventStore;
-(id)footerText;
-(void)_eventStoreChanged:(id)arg1 ;
-(id)_accountStore;
-(id)initWithParentController:(id)arg1 ;
-(id)headerText;
-(id)specifiers;
-(void)_freeSpecifiers;
-(BOOL)_shouldShowFoundInMailToggle;
-(id)_defaultWeekdayLocalizedFormatString;
-(void)setShowInviteeDeclinesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)showInviteeDeclinesEnabled:(id)arg1 ;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setOverlayCalendarID:(id)arg1 specifier:(id)arg2 ;
-(id)overlayCalendarID:(id)arg1 ;
-(id)_titlesForCalendarIdentifiers:(id)arg1 ;
-(void)setShowWeekNumbers:(id)arg1 specifier:(id)arg2 ;
-(id)showWeekNumbers:(id)arg1 ;
-(void)setShowEventsFoundInMail:(id)arg1 specifier:(id)arg2 ;
-(id)showEventsFoundInMail:(id)arg1 ;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(void)setWeekStart:(id)arg1 specifier:(id)arg2 ;
-(id)weekStart:(id)arg1 ;
-(id)_numbersForWeekdays;
-(id)_titlesForWeekDays:(id)arg1 ;
-(void)setWeekStartSpecifier:(PSSpecifier *)arg1 ;
-(void)_createAllCommonSpecifiers;
-(long long)_countOfAccountsSyncingCalendars;
-(PSSpecifier *)weekStartSpecifier;
-(void)setImmediateAlarmCreation:(id)arg1 specifier:(id)arg2 ;
-(id)immediateAlarmCreation:(id)arg1 ;
-(BOOL)shouldLoadSpecifiersLazily;
@end
