/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSMutableDictionary;

@interface ICCameraFile : ICCameraItem {
@private
	void *_fileProperties;	// 8 = 0x8
}
@property(assign) BOOL fetchingMetadata;	// G=0x36dc5759; S=0x36dc577d; 
@property(assign) BOOL fetchingThumbnail;	// G=0x36dc5711; S=0x36dc5735; 
@property(assign) long long fileSize;	// G=0x36dc55a9; S=0x36dc55c9; 
@property(assign) BOOL hasMetadata;	// G=0x36dc56c9; S=0x36dc56ed; converted property
@property(readonly, assign) BOOL hasOverriddenOrientation;	// G=0x36dc565d; 
@property(assign) BOOL hasThumbnail;	// G=0x36dc5681; S=0x36dc56a5; converted property
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x36dc57e1; S=0x36dc5801; 
@property(assign) unsigned orientation;	// G=0x36dc5619; S=0x36dc5639; 
@property(assign, getter=isRaw) BOOL raw;	// G=0x36dc5bc5; S=0x36dc55f5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x36dc5ee9
- (void)dealloc;	// 0x36dc6e5d
- (id)description;	// 0x36dc6cc5
// declared property getter: - (BOOL)fetchingMetadata;	// 0x36dc5759
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x36dc5711
// declared property getter: - (long long)fileSize;	// 0x36dc55a9
- (void)finalize;	// 0x36dc6e09
- (void)flushMetadataCache;	// 0x36dc5b55
- (void)flushThumbnailCache;	// 0x36dc5ae5
- (void)handleCommandCompletionNotification:(id)notification;	// 0x36dc5fbd
// converted property getter: - (BOOL)hasMetadata;	// 0x36dc56c9
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x36dc565d
// converted property getter: - (BOOL)hasThumbnail;	// 0x36dc5681
// declared property getter: - (BOOL)isRaw;	// 0x36dc5bc5
- (id)metadata;	// 0x36dc57c1
// declared property getter: - (id)metadata_hidden;	// 0x36dc57e1
// declared property getter: - (unsigned)orientation;	// 0x36dc5619
- (void)overrideOrientation:(unsigned)orientation;	// 0x36dc6b79
- (BOOL)raw;	// 0x36dc5bc5
- (void)requestMetadata;	// 0x36dc5985
- (void)requestThumbnail;	// 0x36dc5825
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x36dc577d
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x36dc5735
// declared property setter: - (void)setFileSize:(long long)size;	// 0x36dc55c9
// converted property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x36dc56ed
// converted property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x36dc56a5
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x36dc5801
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x36dc5639
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x36dc55f5
- (CGImageRef)thumbnail;	// 0x36dc57a1
@end
