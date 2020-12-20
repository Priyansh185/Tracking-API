func GetPost(id bson.ObjectId) {

collection := client.Database(“my_database”).Collection(“posts”)

filter := bson.D

var post Post



err := collection.FindOne(context.TODO(), filter).Decode(&post)

if err != nil {

log.Fatal(err)

}



fmt.Println(“Found post with title “, post.Title)

}