/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject {
	MPMediaLibrary *_library;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x31db3e29; @synthesize=_identifier
- (id)_initWithMediaLibrary:(id)mediaLibrary identifier:(id)identifier;	// 0x31db3ce1
- (void)dealloc;	// 0x31db3d59
- (id)description;	// 0x31db3dd1
// declared property getter: - (id)identifier;	// 0x31db3e29
@end

