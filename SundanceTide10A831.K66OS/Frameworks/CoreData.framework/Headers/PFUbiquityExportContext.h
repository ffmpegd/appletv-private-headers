/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSMutableDictionary, NSString;

@interface PFUbiquityExportContext : NSObject {
	NSSet *_storesToExportFrom;	// 4 = 0x4
	NSMutableDictionary *_storeNameToStoreExportContext;	// 8 = 0x8
	NSMutableDictionary *_ubiquityRootPathToStack;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x33e3e489; @synthesize=_localPeerID
@property(retain, nonatomic) NSSet *storesToExportFrom;	// G=0x33e3e499; S=0x33e3e4a9; @synthesize=_storesToExportFrom
- (id)initWithLocalPeerID:(id)localPeerID;	// 0x33e3e011
- (void)dealloc;	// 0x33e3e0d5
- (id)description;	// 0x33e3e17d
// declared property getter: - (id)localPeerID;	// 0x33e3e489
// declared property setter: - (void)setStoresToExportFrom:(id)from;	// 0x33e3e4a9
- (id)storeExportContextForStore:(id)store;	// 0x33e3e21d
- (id)storeExportContextForStoreName:(id)storeName;	// 0x33e3e1fd
// declared property getter: - (id)storesToExportFrom;	// 0x33e3e499
@end

