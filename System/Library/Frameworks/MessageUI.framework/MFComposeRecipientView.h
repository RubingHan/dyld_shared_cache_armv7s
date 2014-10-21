/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MessageUI/MFComposeRecipientAtomDelegate.h>
#import <MessageUI/MFDragSource.h>
#import <MessageUI/MFDragDestination.h>
#import <MessageUI/MFCorecipientsIndicatorAtomDelegate.h>

@protocol MFComposeRecipientViewDelegate;
@class MFComposeTextField, NSArray, NSMutableArray, NSMutableDictionary, NSCountedSet, MFModernComposeRecipientAtom, MFComposeRecipient, MFCorecipientsIndicatorAtom, UIButton, NSTimer, UITapGestureRecognizer, UIFont, NSString, UITextField, UIView;

@interface MFComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, UIGestureRecognizerDelegate, MFComposeRecipientAtomDelegate, MFDragSource, MFDragDestination, MFCorecipientsIndicatorAtomDelegate> {

	MFComposeTextField* _textField;
	NSArray* _textFieldConstraints;
	NSMutableArray* _recipients;
	NSMutableDictionary* _atoms;
	NSCountedSet* _uncommentedAddresses;
	CFDictionaryRef _atomPresentationOptionsByRecipient;
	unsigned long long _defaultAtomPresentationOptions;
	MFModernComposeRecipientAtom* _selectedAtom;
	MFComposeRecipient* _placeholderRecipient;
	long long _dragSourceOriginalIndex;
	MFCorecipientsIndicatorAtom* _corecipientsIndicatorAtom;
	UIButton* _addButton;
	bool _editable;
	bool _picking;
	bool _focused;
	NSArray* _properties;
	long long _maxRecipients;
	bool _parentIsClosing;
	bool _deselectOnNextKeyboardInput;
	bool _clearSelectionUIAfterFirstResponder;
	NSTimer* _delayTimer;
	double _inputDelay;
	UITapGestureRecognizer* _tapGestureRecognizer;
	bool _needsReflow;
	bool _needsLayoutConstraintUpdate;
	UIFont* _baseFont;
	<MFComposeRecipientViewDelegate>* _delegate;
	bool _didIgnoreFirstResponderResign;
	bool _allowsDragAndDrop;
	bool _separatorHidden;
	int _hideLastAtomComma;

}

@property (nonatomic,copy) NSArray * addresses; 
@property (assign,nonatomic) bool editable;                                                      //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                            //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,nonatomic) double inputDelay;                                                  //@synthesize inputDelay=_inputDelay - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) UIView * addButton;                                               //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) double offsetForRowWithTextField; 
@property (nonatomic,readonly) long long numberOfRowsOfTextInField; 
@property (assign,nonatomic) bool didIgnoreFirstResponderResign;                                 //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (assign,nonatomic) bool allowsDragAndDrop;                                             //@synthesize allowsDragAndDrop=_allowsDragAndDrop - In the implementation block
@property (assign,nonatomic) bool focused;                                                       //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) unsigned long long defaultAtomPresentationOptions;                  //@synthesize defaultAtomPresentationOptions=_defaultAtomPresentationOptions - In the implementation block
@property (nonatomic,readonly) MFCorecipientsIndicatorAtom * corecipientsIndicator;              //@synthesize corecipientsIndicatorAtom=_corecipientsIndicatorAtom - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) bool separatorHidden;                      //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,retain) UIFont * baseFont; 
@property (assign,nonatomic) int hideLastAtomComma;                                              //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (assign,nonatomic,@dynamic) <MFComposeRecipientViewDelegate> * delegate; 
@property (nonatomic,retain) MFComposeRecipient * placeholderRecipient; 
-(void)setProperty:(int)arg1 ;
-(id)addresses;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(void)refreshPreferredContentSize;
-(double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2 ;
-(bool)didIgnoreFirstResponderResign;
-(void)setInputDelay:(double)arg1 ;
-(void)setAllowsDragAndDrop:(bool)arg1 ;
-(id)uncommentedAddresses;
-(void)parentWillClose;
-(void)parentDidClose;
-(id)viewForDragSource;
-(id)viewForDraggedItem:(id)arg1 atScale:(double)arg2 ;
-(id)supportedDropTypes:(id)arg1 ;
-(bool)allowsDrag;
-(bool)containsAddress:(id)arg1 ;
-(bool)finishEnteringRecipient;
-(void)setFocused:(bool)arg1 ;
-(void)_setNeedsReflow;
-(void)dropItem:(id)arg1 ;
-(void)dragCompletedForItem:(id)arg1 success:(bool)arg2 ;
-(id)viewForDrop;
-(void)dragUpdated:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dragExited:(id)arg1 ;
-(void)dragEntered:(id)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect)frameForDraggedItem:(id)arg1 ;
-(void)dragStartedWithItem:(id)arg1 ;
-(CGRect)dropRect;
-(void)animatePlaceholderForDragFailure:(id)arg1 ;
-(id)dragInitiatedAtPoint:(CGPoint)arg1 ;
-(void)_removeAllRecipients;
-(void)_addRecord:(void*)arg1 identifier:(int)arg2 ;
-(double)inputDelay;
-(bool)allowsDragAndDrop;
-(id)baseFont;
-(bool)isSeparatorHidden;
-(bool)focused;
-(long long)maxRecipients;
-(int)hideLastAtomComma;
-(void)setHideLastAtomComma:(int)arg1 ;
-(void)addButtonClicked:(id)arg1 ;
-(void)_cancelDelayTimer;
-(void)_addUncommentedAddress:(id)arg1 ;
-(void)_removeAddressAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_removeUncommentedAddress:(id)arg1 ;
-(id)placeholderRecipient;
-(void)clearAllAddressAtomPresentationOptions;
-(void)setPlaceholderRecipient:(id)arg1 ;
-(void)_deselectAtom;
-(long long)_recipientIndexAtPoint:(CGPoint)arg1 ;
-(unsigned long long)_addressAtomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_updateLayoutConstraintsAndGetNumberOfRows:(out unsigned long long*)arg1 textFieldWillBeLastRow:(out bool*)arg2 ;
-(double)_topRowTextWidth;
-(bool)_shouldShowCorecipientsIndicatorAtom;
-(void)setDidIgnoreFirstResponderResign:(bool)arg1 ;
-(void)_delayTimerFired:(id)arg1 ;
-(void)_deleteSelectedAtom;
-(void)didTapShowCorecipientsForIndicatorAtom:(id)arg1 recipients:(id)arg2 ;
-(void)showCorecipientIndicator:(bool)arg1 withCorecipients:(id)arg2 animated:(bool)arg3 ;
-(bool)mf_textFieldShowingSearchResults:(id)arg1 ;
-(void)mf_selectNextSearchResultForTextField:(id)arg1 ;
-(void)mf_selectPreviousSearchResultForTextField:(id)arg1 ;
-(bool)mf_presentSearchResultsForTextField:(id)arg1 ;
-(bool)mf_chooseSelectedSearchResultForTextField:(id)arg1 ;
-(void)mf_dismissSearchResults:(id)arg1 ;
-(void)mf_recipientTextField:(id)arg1 didAddRecipientAddress:(id)arg2 ;
-(void)_setNeedsLayoutConstraintUpdate;
-(unsigned long long)defaultAtomPresentationOptions;
-(void)setDefaultAtomPresentationOptions:(unsigned long long)arg1 ;
-(id)corecipientsIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)becomeFirstResponder;
-(id)text;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3 ;
-(bool)keyboardInputShouldDelete:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)clearText;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setEditable:(bool)arg1 ;
-(bool)hasContent;
-(void)textChanged:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(bool)editable;
-(id)textField;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)setSeparatorHidden:(bool)arg1 ;
-(long long)numberOfRowsOfTextInField;
-(double)offsetForRowWithTextField;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(void)setAddressAtomPresentationOptions:(unsigned long long)arg1 forRecipient:(id)arg2 ;
-(void)_reflowAnimated:(bool)arg1 ;
-(void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(bool)arg3 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(bool)_addable;
-(id)recipients;
-(void)setAddresses:(id)arg1 ;
-(id)addButton;
-(void)reflow;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)setBaseFont:(id)arg1 ;
-(void)addAddress:(id)arg1 ;
@end
