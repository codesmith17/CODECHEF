const express = require("express");
const bodyParser = require("body-parser");
const elasticsearch = require("elasticsearch");

const app = express();
const port = 3000;
const esClient = new elasticsearch.Client({ host: "localhost:9200" });

app.use(bodyParser.json());

app.post("/ingest", (req, res) => {
  try {
    const data = req.body;
    esClient.index({ index: "logs", body: data });
    res.status(201).json({ message: "Log ingested successfully" });
  } catch (error) {
    res.status(500).json({ error: error.message });
  }
});

app.listen(port, () => {
  console.log(`Log Ingestor listening at http://localhost:${port}`);
});
