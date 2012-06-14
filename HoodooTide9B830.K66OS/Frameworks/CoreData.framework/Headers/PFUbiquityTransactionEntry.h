/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObject.h"

@class NSDate, PFUbiquityPeer, NSURL, NSString, NSNumber, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionEntry : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *actingPeer;	// @dynamic
@property(retain, nonatomic) NSString *globalIDStr;	// @dynamic
@property(retain, nonatomic) NSString *knowledgeVectorString;	// @dynamic
@property(retain, nonatomic) NSString *localIDStr;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// @dynamic
@property(retain, nonatomic) NSDate *transactionDate;	// @dynamic
@property(retain, nonatomic) NSString *transactionLogFilename;	// @dynamic
@property(readonly, assign) NSURL *transactionLogURL;	// G=0x3237f66d; 
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
@property(assign) int transactionType;	// G=0x3237f5cd; S=0x3237f609; 
@property(retain, nonatomic) NSNumber *transactionTypeNum;	// @dynamic
+ (BOOL)canMergeKnowledgeVector:(id)vector withKnowledgeVector:(id)knowledgeVector;	// 0x323801ad
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)vector toKnowledgeVector:(id)knowledgeVector;	// 0x3237fc75
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)peerDictionary;	// 0x3237ff45
+ (id)createPeerCodeDictionaryFromVector:(id)vector;	// 0x3237f9cd
+ (id)createSumForKnowlegeVectorString:(id)knowlegeVectorString;	// 0x32380099
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)compressedObjectIDs withTransactionType:(int)transactionType withImportContext:(id)importContext;	// 0x3237fb59
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)compressedGlobalID withTransactionType:(int)transactionType importContext:(id)context;	// 0x3237f775
+ (id)transactionEntriesAfterPeerState:(id)state forStoreName:(id)storeName inManagedObjectContext:(id)managedObjectContext;	// 0x32380541
+ (id)transactionEntriesForGlobalIDStrings:(id)globalIDStrings beforePeerState:(id)state inManagedObjectContext:(id)managedObjectContext;	// 0x32380849
+ (id)transactionEntriesForPeerID:(id)peerID beforeTransacationNumber:(id)number forStoreNamed:(id)storeNamed inManagedObjectContext:(id)managedObjectContext;	// 0x32380cf9
+ (id)transactionEntriesForPeerID:(id)peerID withTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x32380b99
+ (id)transactionEntriesMatchingGlobalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x32380389
+ (id)transactionEntriesMatchingLocalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x32380465
+ (id)transactionEntryForGlobalIDString:(id)globalIDString withActingPeerID:(id)actingPeerID atTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x32380e59
- (id)initAndInsertIntoManagedObjectContext:(id)context;	// 0x3237faf9
// declared property setter: - (void)setTransactionType:(int)type;	// 0x3237f609
// declared property getter: - (id)transactionLogURL;	// 0x3237f66d
// declared property getter: - (int)transactionType;	// 0x3237f5cd
@end
