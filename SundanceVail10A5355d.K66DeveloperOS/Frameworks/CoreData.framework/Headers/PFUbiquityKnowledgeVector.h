/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreData-Structs.h"

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
	NSDictionary *_kv;	// 4 = 0x4
	NSNumber *_sum;	// 8 = 0x8
	unsigned _hash;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x335bcf75; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x335bb9c1; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x335bcf65; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x335bce3d
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x335bcd41
- (id)init;	// 0x335bb101
- (id)initWithCoder:(id)coder;	// 0x335bb731
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x335bb2a5
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x335bb185
- (id)initWithPeerStatesFromStoreMetadata:(id)storeMetadata;	// 0x335bb461
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x335bb30d
- (void)_updateHash;	// 0x335bbb2d
- (void)_updateSum;	// 0x335bb9f9
- (id)allPeerIDs;	// 0x335bc19d
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x335bc959
- (int)compare:(id)compare;	// 0x335bb79d
- (BOOL)conflictsWithKnowledgeVector:(id)knowledgeVector;	// 0x335bcb3d
- (id)copyWithZone:(NSZone *)zone;	// 0x335bb669
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x335bc661
- (id)createKnowledgeVectorString;	// 0x335bbf99
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x335bc1bd
- (void)dealloc;	// 0x335bb5f1
- (id)description;	// 0x335bb6ad
- (void)encodeWithCoder:(id)coder;	// 0x335bb76d
// declared property getter: - (unsigned)hash;	// 0x335bcf75
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x335bbd21
- (BOOL)isDescendantOfKnowledgeVector:(id)knowledgeVector;	// 0x335bbb89
- (BOOL)isEqual:(id)equal;	// 0x335bb929
- (BOOL)isZeroVector;	// 0x335bbeb9
// declared property getter: - (unsigned)length;	// 0x335bb9c1
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x335bc235
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x335bc839
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x335bc42d
// declared property getter: - (id)sum;	// 0x335bcf65
- (id)transactionNumberForPeerID:(id)peerID;	// 0x335bc17d
@end

