
@interface TMLMarkdownParser : NSObject {
    NSMutableDictionary * _attributes;
    NSArray * _extraRegex;
    NSArray * _extraRules;
    NSArray * _regex;
    NSArray * _rules;
    NSScanner * _scanner;
    NSMutableDictionary * _tag;
}

+ (id)parse:(id)arg1 tags:(id*)arg2 withRules:(id)arg3;
+ (id)postProcessString:(id)arg1;
+ (id)preProcessString:(id)arg1;
+ (id)regexFromRules:(id)arg1;
+ (id)stringOfTagType:(id)arg1 andCount:(unsigned long long)arg2;
+ (id)unescapeString:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (bool)isListTagOpen:(id)arg1;
- (id)parse:(id)arg1 tags:(id*)arg2;
- (id)replacestring:(id)arg1 usingRule:(id)arg2 atIndex:(unsigned long long)arg3 additonalRules:(bool)arg4;
- (id)tagFromType:(int)arg1;

@end