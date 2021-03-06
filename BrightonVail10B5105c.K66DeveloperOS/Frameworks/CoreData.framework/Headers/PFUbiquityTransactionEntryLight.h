/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityGlobalObjectID, NSString, PFUbiquityLocation, NSManagedObjectID, NSNumber, PFUbiquityKnowledgeVector, NSDate;

@interface PFUbiquityTransactionEntryLight : NSObject {
	NSManagedObjectID *_localID;	// 4 = 0x4
	PFUbiquityGlobalObjectID *_globalID;	// 8 = 0x8
	int _transactionType;	// 12 = 0xc
	NSString *_actingPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	NSNumber *_transactionNumber;	// 24 = 0x18
	PFUbiquityLocation *_transactionLogLocation;	// 28 = 0x1c
	PFUbiquityKnowledgeVector *_kv;	// 32 = 0x20
	NSDate *_transactionDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *actingPeerID;	// G=0x363974b1; S=0x363974c1; @synthesize=_actingPeerID
@property(retain, nonatomic) PFUbiquityGlobalObjectID *globalID;	// G=0x36397471; S=0x36397481; @synthesize=_globalID
@property(retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x36397531; S=0x36397541; @synthesize=_kv
@property(retain, nonatomic) NSManagedObjectID *localID;	// G=0x36397451; S=0x36397461; @synthesize=_localID
@property(retain, nonatomic) NSString *storeName;	// G=0x363974d1; S=0x363974e1; @synthesize=_storeName
@property(retain, nonatomic) NSDate *transactionDate;	// G=0x36397551; S=0x36397561; @synthesize=_transactionDate
@property(retain, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x36397511; S=0x36397521; @synthesize=_transactionLogLocation
@property(retain, nonatomic) NSNumber *transactionNumber;	// G=0x363974f1; S=0x36397501; @synthesize=_transactionNumber
@property(assign, nonatomic) int transactionType;	// G=0x36397491; S=0x363974a1; @synthesize=_transactionType
- (id)init;	// 0x36396fc9
- (id)initWithTransactionEntry:(id)transactionEntry;	// 0x3639706d
// declared property getter: - (id)actingPeerID;	// 0x363974b1
- (void)dealloc;	// 0x36397281
- (id)description;	// 0x36397351
// declared property getter: - (id)globalID;	// 0x36397471
// declared property getter: - (id)knowledgeVector;	// 0x36397531
// declared property getter: - (id)localID;	// 0x36397451
// declared property setter: - (void)setActingPeerID:(id)anId;	// 0x363974c1
// declared property setter: - (void)setGlobalID:(id)anId;	// 0x36397481
// declared property setter: - (void)setKnowledgeVector:(id)vector;	// 0x36397541
// declared property setter: - (void)setLocalID:(id)anId;	// 0x36397461
// declared property setter: - (void)setStoreName:(id)name;	// 0x363974e1
// declared property setter: - (void)setTransactionDate:(id)date;	// 0x36397561
// declared property setter: - (void)setTransactionLogLocation:(id)location;	// 0x36397521
// declared property setter: - (void)setTransactionNumber:(id)number;	// 0x36397501
// declared property setter: - (void)setTransactionType:(int)type;	// 0x363974a1
// declared property getter: - (id)storeName;	// 0x363974d1
// declared property getter: - (id)transactionDate;	// 0x36397551
// declared property getter: - (id)transactionLogLocation;	// 0x36397511
// declared property getter: - (id)transactionNumber;	// 0x363974f1
// declared property getter: - (int)transactionType;	// 0x36397491
@end

