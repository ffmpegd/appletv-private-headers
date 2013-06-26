/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@protocol TIAddressBookLoadable;

@interface TIAddressBookLoader : NSObject {
	id<TIAddressBookLoadable> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<TIAddressBookLoadable> delegate;	// G=0x359b0331; S=0x359b0341; @synthesize=_delegate
+ (id)addressBookLoaderWithDelegate:(id)delegate;	// 0x359affa1
- (id)initWithDelegate:(id)delegate;	// 0x359affdd
- (void)addressBookChanged:(id)changed;	// 0x359b0321
- (void)dealloc;	// 0x359b0081
// declared property getter: - (id)delegate;	// 0x359b0331
- (void)loadAddressBook;	// 0x359b00dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x359b0341
@end
