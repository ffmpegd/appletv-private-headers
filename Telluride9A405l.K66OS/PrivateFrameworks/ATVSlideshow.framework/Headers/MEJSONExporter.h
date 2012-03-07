/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle;

@interface MEJSONExporter : NSObject {
	NSFileHandle *mOutputFile;	// 4 = 0x4
	int mIndentLevel;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	BOOL mPrettyPrint;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL prettyPrint;	// G=0x3361ec19; S=0x3361ec29; @synthesize=mPrettyPrint
- (id)init;	// 0x3361e211
- (void)_appendIndent;	// 0x3361eb81
- (void)_appendNewline;	// 0x3361ebe5
- (void)_appendString:(id)string;	// 0x3361eb41
- (void)_exportArray:(id)array;	// 0x3361e6d9
- (void)_exportDictionary:(id)dictionary;	// 0x3361e415
- (void)_exportValue:(id)value;	// 0x3361e90d
- (void)dealloc;	// 0x3361e26d
- (BOOL)exportPropertyList:(id)list toPath:(id)path;	// 0x3361e2c1
// declared property getter: - (BOOL)prettyPrint;	// 0x3361ec19
// declared property setter: - (void)setPrettyPrint:(BOOL)print;	// 0x3361ec29
@end

