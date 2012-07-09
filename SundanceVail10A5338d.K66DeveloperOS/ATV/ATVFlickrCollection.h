/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosCollection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrCollection : ATVInternetPhotosCollection {
	NSString *_keyImageFlickrIdentifier;	// 64 = 0x40
}
@property(retain) NSString *keyImageFlickrIdentifier;	// G=0x18ab61; S=0x18ac3d; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x18aa11
- (id)archivableCollectionInfo;	// 0x18ad25
- (id)collectionType;	// 0x18ae5d
- (void)dealloc;	// 0x18ab15
// converted property getter: - (id)keyImageFlickrIdentifier;	// 0x18ab61
- (id)mediaTypes;	// 0x18ae19
// converted property setter: - (void)setKeyImageFlickrIdentifier:(id)identifier;	// 0x18ac3d
@end
