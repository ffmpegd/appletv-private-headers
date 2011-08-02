/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSBundle, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
@private
	NSString *bundleResourceName;	// 4 = 0x4
	NSBundle *bundle;	// 8 = 0x8
	NSData *archiveData;	// 12 = 0xc
	UINibDecoder *nibDecoder;	// 16 = 0x10
	BOOL instantiatingForSimulator;	// 20 = 0x14
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x3027fc79; S=0x302803dd; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x3027fc89; S=0x302803b5; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x3027fc99; S=0x30280389; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x3027fc49; S=0x3027fc59; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x3027fc69; S=0x30280409; @synthesize
// declared property getter: - (id)archiveData;	// 0x3027fc79
// declared property getter: - (id)bundle;	// 0x3027fc89
// declared property getter: - (id)bundleResourceName;	// 0x3027fc99
- (void)dealloc;	// 0x30280309
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x3027fc49
// declared property getter: - (id)nibDecoder;	// 0x3027fc69
// declared property setter: - (void)setArchiveData:(id)data;	// 0x302803dd
// declared property setter: - (void)setBundle:(id)bundle;	// 0x302803b5
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x30280389
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3027fc59
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x30280409
@end
