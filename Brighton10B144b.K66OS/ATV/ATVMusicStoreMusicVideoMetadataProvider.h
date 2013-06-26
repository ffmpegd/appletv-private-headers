/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreMusicVideoMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)_initializeAbbreviatedTransformers;	// 0x2063dd
+ (void)_initializeDetailedTransformers;	// 0x2062c5
+ (void)_initializeMappings:(id)mappings;	// 0x2060f1
+ (void)initialize;	// 0x205e49
- (void)_populateAbbreviatedMetadata:(id)metadata;	// 0x2064b5
- (void)_populateDetailedMetadata:(id)metadata;	// 0x2067cd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x205f1d
- (void)populateMetadataForControl:(id)control;	// 0x205ff9
@end
