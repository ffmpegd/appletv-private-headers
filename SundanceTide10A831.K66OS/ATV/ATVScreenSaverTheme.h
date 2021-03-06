/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverTheme : XXUnknownSuperclass {
	NSString *_slideShowKey;	// 4 = 0x4
	NSString *_localizableKey;	// 8 = 0x8
	NSString *_screensaverIdentifier;	// 12 = 0xc
	BOOL _usableForAlbumArtwork;	// 16 = 0x10
	BOOL _usableForPhotos;	// 17 = 0x11
	BOOL _hasExtraSetupInfo;	// 18 = 0x12
}
@property(assign, nonatomic) BOOL hasExtraSetupInfo;	// G=0x243495; S=0x2434a5; @synthesize=_hasExtraSetupInfo
@property(copy, nonatomic) NSString *localizableKey;	// G=0x24340d; S=0x243421; @synthesize=_localizableKey
@property(copy, nonatomic) NSString *screensaverIdentifier;	// G=0x243431; S=0x243445; @synthesize=_screensaverIdentifier
@property(copy, nonatomic) NSString *slideShowKey;	// G=0x2433e9; S=0x2433fd; @synthesize=_slideShowKey
@property(assign, nonatomic) BOOL usableForAlbumArtwork;	// G=0x243455; S=0x243465; @synthesize=_usableForAlbumArtwork
@property(assign, nonatomic) BOOL usableForPhotos;	// G=0x243475; S=0x243485; @synthesize=_usableForPhotos
- (void)dealloc;	// 0x243371
// declared property getter: - (BOOL)hasExtraSetupInfo;	// 0x243495
// declared property getter: - (id)localizableKey;	// 0x24340d
// declared property getter: - (id)screensaverIdentifier;	// 0x243431
// declared property setter: - (void)setHasExtraSetupInfo:(BOOL)info;	// 0x2434a5
// declared property setter: - (void)setLocalizableKey:(id)key;	// 0x243421
// declared property setter: - (void)setScreensaverIdentifier:(id)identifier;	// 0x243445
// declared property setter: - (void)setSlideShowKey:(id)key;	// 0x2433fd
// declared property setter: - (void)setUsableForAlbumArtwork:(BOOL)albumArtwork;	// 0x243465
// declared property setter: - (void)setUsableForPhotos:(BOOL)photos;	// 0x243485
// declared property getter: - (id)slideShowKey;	// 0x2433e9
// declared property getter: - (BOOL)usableForAlbumArtwork;	// 0x243455
// declared property getter: - (BOOL)usableForPhotos;	// 0x243475
@end

