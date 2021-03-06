/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, NSArray;

@interface PKPaymentCardsOnFileViewController : PKPaymentSetupTableViewController {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _allowsManualEntry;

}

@property (nonatomic,copy,readonly) NSArray * cardsOnFile; 
@property (assign,nonatomic) BOOL allowsManualEntry;                    //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)cancel:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(NSArray *)cardsOnFile;
-(void)_presentCardDetailsControllerForCredential:(id)arg1 ;
-(void)_presentManualAddController;
-(BOOL)allowsManualEntry;
@end

