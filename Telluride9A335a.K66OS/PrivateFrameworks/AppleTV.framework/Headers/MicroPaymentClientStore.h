/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface MicroPaymentClientStore : NSObject <ISSingleton> {
@private
	NSMutableArray *_clients;	// 4 = 0x4
	NSManagedObjectContext *_context;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *clients;	// G=0x3434575d; @synthesize=_clients
+ (void)setSharedInstance:(id)instance;	// 0x343454f9
+ (id)sharedInstance;	// 0x34345539
- (id)_clients;	// 0x343458a1
- (id)_managedObjectContext;	// 0x34345a11
- (id)clientForIdentity:(id)identity create:(BOOL)create;	// 0x34345575
// declared property getter: - (id)clients;	// 0x3434575d
- (id)copyClientsForIdentifier:(id)identifier;	// 0x34345795
- (void)dealloc;	// 0x34345475
@end
