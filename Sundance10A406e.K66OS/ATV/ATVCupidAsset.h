/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, MSAsset, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidAsset : XXUnknownSuperclass {
	MSAsset *_asset;	// 4 = 0x4
	int _state;	// 8 = 0x8
	NSString *_assetID;	// 12 = 0xc
	NSDate *_dateContentCreated;	// 16 = 0x10
}
@property(retain) MSAsset *asset;	// G=0xf08c5; S=0xf08d9; @synthesize=_asset
@property(copy) NSString *assetID;	// G=0xf0915; S=0xf0929; @synthesize=_assetID
@property(retain) NSDate *dateContentCreated;	// G=0xf0939; S=0xf094d; @synthesize=_dateContentCreated
@property(assign) int state;	// G=0xf08e9; S=0xf08fd; @synthesize=_state
- (id)initWithCoder:(id)coder;	// 0xf0629
// declared property getter: - (id)asset;	// 0xf08c5
// declared property getter: - (id)assetID;	// 0xf0915
// declared property getter: - (id)dateContentCreated;	// 0xf0939
- (void)dealloc;	// 0xf0725
- (id)description;	// 0xf079d
- (void)encodeWithCoder:(id)coder;	// 0xf0571
// declared property setter: - (void)setAsset:(id)asset;	// 0xf08d9
// declared property setter: - (void)setAssetID:(id)anId;	// 0xf0929
// declared property setter: - (void)setDateContentCreated:(id)created;	// 0xf094d
// declared property setter: - (void)setState:(int)state;	// 0xf08fd
// declared property getter: - (int)state;	// 0xf08e9
@end

