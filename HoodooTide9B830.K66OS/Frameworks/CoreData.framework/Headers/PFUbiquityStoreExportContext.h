/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityPeer, NSMutableSet, NSSet, NSSQLCore, _PFUbiquityStack, PFUbiquityLocation, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreExportContext : NSObject {
@private
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	_PFUbiquityStack *_stack;	// 8 = 0x8
	PFUbiquityStoreMetadata *_storeMetadata;	// 12 = 0xc
	PFUbiquityPeer *_localPeer;	// 16 = 0x10
	NSMutableSet *_transactionEntries;	// 20 = 0x14
	NSSQLCore *_store;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) PFUbiquityPeer *localPeer;	// G=0x3238e869; @synthesize=_localPeer
@property(readonly, assign, nonatomic) _PFUbiquityStack *stack;	// G=0x3238e889; @synthesize=_stack
@property(retain, nonatomic) NSSQLCore *store;	// G=0x3238e849; S=0x3238ece9; @synthesize=_store
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// G=0x3238e879; @synthesize=_storeMetadata
@property(readonly, assign, nonatomic) NSSet *transactionEntries;	// G=0x3238e859; @synthesize=_transactionEntries
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3238e899; @synthesize=_ubiquityRootLocation
- (id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location forLocalPeerID:(id)localPeerID withStack:(id)stack;	// 0x3238f00d
- (id)addTransactionEntryForGlobalIDString:(id)globalIDString andLocalManagedObjectID:(id)anId andTransactionType:(int)type;	// 0x3238ed11
- (void)dealloc;	// 0x3238ef2d
- (id)description;	// 0x3238ee5d
// declared property getter: - (id)localPeer;	// 0x3238e869
// declared property setter: - (void)setStore:(id)store;	// 0x3238ece9
// declared property getter: - (id)stack;	// 0x3238e889
// declared property getter: - (id)store;	// 0x3238e849
// declared property getter: - (id)storeMetadata;	// 0x3238e879
// declared property getter: - (id)transactionEntries;	// 0x3238e859
// declared property getter: - (id)ubiquityRootLocation;	// 0x3238e899
@end
