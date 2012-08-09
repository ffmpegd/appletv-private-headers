/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface TIKeyboardInputManagerConfig : NSObject {
	BOOL allowsSpaceCorrections;	// 4 = 0x4
	NSString *dynamicDictionaryPath;	// 8 = 0x8
	NSString *inputMode;	// 12 = 0xc
	NSString *ngramModelPath;	// 16 = 0x10
	NSString *staticDictionaryPath;	// 20 = 0x14
	BOOL testing;	// 24 = 0x18
	BOOL usesTextChecker;	// 25 = 0x19
	BOOL usesAutocorrectionLists;	// 26 = 0x1a
	BOOL usesExtendedLearning;	// 27 = 0x1b
	BOOL usesRetrocorrection;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL allowsSpaceCorrections;	// G=0x315f89a1; S=0x315f89b1; @synthesize
@property(copy, nonatomic) NSString *dynamicDictionaryPath;	// G=0x315f89c1; S=0x315f89d5; @synthesize
@property(copy, nonatomic) NSString *inputMode;	// G=0x315f89e5; S=0x315f89f9; @synthesize
@property(copy, nonatomic) NSString *ngramModelPath;	// G=0x315f8a09; S=0x315f8a1d; @synthesize
@property(copy, nonatomic) NSString *staticDictionaryPath;	// G=0x315f8a2d; S=0x315f8a41; @synthesize
@property(assign, nonatomic, getter=isTesting) BOOL testing;	// G=0x315f8a51; S=0x315f8a61; @synthesize
@property(assign, nonatomic) BOOL usesAutocorrectionLists;	// G=0x315f8a91; S=0x315f8aa1; @synthesize
@property(assign, nonatomic) BOOL usesExtendedLearning;	// G=0x315f8ab1; S=0x315f8ac1; @synthesize
@property(assign, nonatomic) BOOL usesRetrocorrection;	// G=0x315f8ad1; S=0x315f8ae1; @synthesize
@property(assign, nonatomic) BOOL usesTextChecker;	// G=0x315f8a71; S=0x315f8a81; @synthesize
+ (id)configurationFromUIKit;	// 0x315f87c9
// declared property getter: - (BOOL)allowsSpaceCorrections;	// 0x315f89a1
- (void)dealloc;	// 0x315f8921
// declared property getter: - (id)dynamicDictionaryPath;	// 0x315f89c1
// declared property getter: - (id)inputMode;	// 0x315f89e5
// declared property getter: - (BOOL)isTesting;	// 0x315f8a51
// declared property getter: - (id)ngramModelPath;	// 0x315f8a09
// declared property setter: - (void)setAllowsSpaceCorrections:(BOOL)corrections;	// 0x315f89b1
// declared property setter: - (void)setDynamicDictionaryPath:(id)path;	// 0x315f89d5
// declared property setter: - (void)setInputMode:(id)mode;	// 0x315f89f9
// declared property setter: - (void)setNgramModelPath:(id)path;	// 0x315f8a1d
// declared property setter: - (void)setStaticDictionaryPath:(id)path;	// 0x315f8a41
// declared property setter: - (void)setTesting:(BOOL)testing;	// 0x315f8a61
// declared property setter: - (void)setUsesAutocorrectionLists:(BOOL)lists;	// 0x315f8aa1
// declared property setter: - (void)setUsesExtendedLearning:(BOOL)learning;	// 0x315f8ac1
// declared property setter: - (void)setUsesRetrocorrection:(BOOL)retrocorrection;	// 0x315f8ae1
// declared property setter: - (void)setUsesTextChecker:(BOOL)checker;	// 0x315f8a81
// declared property getter: - (id)staticDictionaryPath;	// 0x315f8a2d
// declared property getter: - (BOOL)usesAutocorrectionLists;	// 0x315f8a91
// declared property getter: - (BOOL)usesExtendedLearning;	// 0x315f8ab1
// declared property getter: - (BOOL)usesRetrocorrection;	// 0x315f8ad1
// declared property getter: - (BOOL)usesTextChecker;	// 0x315f8a71
@end
