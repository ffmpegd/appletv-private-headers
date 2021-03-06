/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library

@class NSObject, NSManagedObjectModel, NSPersistentStore, NSString, PFUbiquityLocation;
@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : NSOperation {
@private
	NSString *_localPeerID;	// 12 = 0xc
	NSString *_storeName;	// 16 = 0x10
	NSString *_modelVersionHash;	// 20 = 0x14
	NSManagedObjectModel *_model;	// 24 = 0x18
	PFUbiquityLocation *_ubiquityRootLocation;	// 28 = 0x1c
	NSPersistentStore *_store;	// 32 = 0x20
	NSObject<PFUbiquityBaselineRollOperationDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x3243dbd1; S=0x3243dbe1; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3243dc41; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel *model;	// G=0x3243dc11; @synthesize=_model
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x3243dc01; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x3243dbf1; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x3243dc31; @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3243dc21; @synthesize=_ubiquityRootLocation
- (id)initWithStore:(id)store andLocalPeerID:(id)anId;	// 0x3243dc51
- (void)dealloc;	// 0x3243eb71
// declared property getter: - (id)delegate;	// 0x3243dbd1
- (id)description;	// 0x3243eab5
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x3243e6e5
- (BOOL)isEqual:(id)equal;	// 0x3243dde5
// declared property getter: - (id)localPeerID;	// 0x3243dc41
- (void)main;	// 0x3243df45
// declared property getter: - (id)model;	// 0x3243dc11
// declared property getter: - (id)modelVersionHash;	// 0x3243dc01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3243dbe1
// declared property getter: - (id)store;	// 0x3243dbf1
// declared property getter: - (id)storeName;	// 0x3243dc31
// declared property getter: - (id)ubiquityRootLocation;	// 0x3243dc21
@end

