/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquitySafeSaveFile.h"

@class PFUbiquityKnowledgeVector, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {
	PFUbiquityKnowledgeVector *_kv;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *kv;	// G=0x3638497d; @synthesize=_kv
@property(readonly, assign, nonatomic) PFUbiquityLocation *receiptFileLocation;	// G=0x36383cc1; 
- (id)init;	// 0x36383af9
- (id)initWithLocalPeerID:(id)localPeerID andKnowledgeVector:(id)vector forPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x36383ba9
- (id)initWithLocalPeerID:(id)localPeerID andReceiptFileLocation:(id)location;	// 0x36383c05
- (id)initWithLocalPeerID:(id)localPeerID receiptPeerID:(id)anId storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x36383b3d
- (void)dealloc;	// 0x36383c71
- (id)description;	// 0x36383cd1
// declared property getter: - (id)kv;	// 0x3638497d
- (BOOL)loadFileFromLocation:(id)location error:(id *)error;	// 0x36383d39
// declared property getter: - (id)receiptFileLocation;	// 0x36383cc1
- (BOOL)writeFileToLocation:(id)location error:(id *)error;	// 0x36384349
@end
