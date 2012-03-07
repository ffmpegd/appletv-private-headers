/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UINib : NSObject {
@private
	id storage;	// 4 = 0x4
}
@property(assign) BOOL captureEnclosingNIBBundleOnDecode;	// G=0x35328cfd; S=0x35328d21; converted property
@property(assign) BOOL instantiatingForSimulator;	// G=0x35328cb9; S=0x35328cdd; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x35328849
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x353287fd
- (id)initWithBundle:(id)bundle;	// 0x35328511
- (id)initWithCoder:(id)coder;	// 0x35328895
- (id)initWithContentsOfFile:(id)file;	// 0x35328751
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x3532858d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3532865d
- (void)_registerForMemoryWarningIfNeeded;	// 0x35328c31
// converted property getter: - (BOOL)captureEnclosingNIBBundleOnDecode;	// 0x35328cfd
- (void)dealloc;	// 0x35328b81
- (void)didReceiveMemoryWarning:(id)warning;	// 0x35329785
- (id)effectiveBundle;	// 0x35328d41
- (void)encodeWithCoder:(id)coder;	// 0x35328a55
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x35329129
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x35328cb9
- (id)lazyArchiveData;	// 0x35328d89
// converted property setter: - (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)decode;	// 0x35328d21
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x35328cdd
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x35328f45
@end

