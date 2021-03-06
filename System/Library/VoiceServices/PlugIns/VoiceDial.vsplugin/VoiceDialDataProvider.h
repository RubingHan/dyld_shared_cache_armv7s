/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceDial/VoiceDial-Structs.h>
#import <VoiceServices/VSRecognitionModelDataProvider.h>

@class NSArray, NSSet, VoiceDialNameDataSource;

@interface VoiceDialDataProvider : NSObject <VSRecognitionModelDataProvider> {

	void* _addressBook;
	CFArrayRef _people;
	NSArray* _phoneLabels;
	NSArray* _facetimeLabels;
	NSSet* _weightedPhoneLabels;
	NSSet* _weightedFacetimeLabels;
	SCD_Struct_Vo2 _peopleRange;
	long long _totalPeople;
	VoiceDialNameDataSource* _namesSource;
	int _lastSequenceNumber;
	CFStringRef _lastDatabaseUUID;
	struct {
		unsigned hasDeterminedCompositePref : 1;
		unsigned compositeNamesOnly : 1;
		unsigned canVideoCall : 1;
	}  _voiceDialProviderFlags;

}
-(void)dealloc;
-(id)init;
-(void*)_addressBook;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(bool)getValue:(id*)arg1 weight:(long long*)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5 ;
-(id)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(id)cacheValidityIdentifier;
-(bool)isCacheValidityIdentifierValid:(id)arg1 ;
-(bool)_shouldUseCompositeNamesOnly;
-(void)getLabels:(id*)arg1 andWeightedLabels:(id*)arg2 ForABProperty:(int)arg3 ;
-(long long)_totalPeople;
-(id)_facetimeLabels;
-(id)_phoneLabels;
-(id)_namesSource;
-(void*)_voiceDialRecordAtIndex:(long long)arg1 ;
-(bool)_sequenceNumberIsValid:(int)arg1 ;
-(void)_handleAddressBookChanged;
@end

